import schema
import usuario
import tarefa

def menu():
    print("\033[34m\u25B4 \033[m"*15)
    print("\033[1;34m***   Menu de opções   ***\033[m")
    print("\033[34m\u25B4 \033[m"*15)
    print("1. Manter usuário\n2. Manter tarefa\033[4;31m\n3. Terminar programa\033[m")
    selecao = int(input("\033[32mSelecione uma opção:\033[m "))
    return selecao

def subMenu(tabela):
    print("\033[34m\u25B4 \033[m"*15)
    print(f"\033[1;34m   ***  Menu de {tabela}   ***\033[m")
    print("\033[34m\u25B4 \033[m"*15)
    print(f"1. Inserir {tabela}\n2. Atualizar {tabela}\n3. Consultar {tabela}\n4. Excluir {tabela}\n\033[4;31m5. Retornar ao menu principal\033[m")
    selecao = int(input("\033[32mSelecione uma opção:\033[m "))
    return selecao

def limparTela():
    import os
    from time import sleep
    def  screen_clear():
        if os.name == 'posix':
            _ = os.system('clear')
        else:
            _ = os.system('cls')

    sleep(1)
    screen_clear()

def limit(max, min, n):
    if n < min or n > max:
        print("\033[41mOpção inválida!\033[m")
        limparTela()
        return False
    return True

if __name__ == '__main__':
    limparTela()
    print("\033[33mIniciando testes de tarefas...\033[m")
    banco = input("\033[1;46mInforme o nome do arquivo:\033[m ")
    conn = schema.criarBanco(banco)
    limparTela() #Selecionar arquivo
    
    user = usuario.Usuarios(conn)
    task = tarefa.Tarefas(conn)

    while True:
        tabela = menu() #Criar menu principal

        while limit(3, 1, tabela) == False:
            tabela = menu()
            limparTela() #Analisar se a entrada está correta

        if tabela == 3: #Verificar opção finalizar
            limparTela()
            print("\033[33mFinalizando programa...\033[m")
            limparTela()
            break

        else: #Entrada sub-menu
            listaMenu = ['Usuarios', 'Tarefas']
            limparTela()
            while True:
                opcao = subMenu(listaMenu[tabela-1]) 
                while limit(5, 1, opcao) == False:
                    opcao = subMenu(listaMenu[tabela-1]) 
                    limparTela() #Analisar se a entrada está correta

                from datetime import date
                if opcao == 1:
                    limparTela()
                    print(f"\033[35m*** Inserir {listaMenu[tabela-1]}   ***\033[m")
                    if tabela == 1:
                       nomeCompleto = input("Insira o nome completo: ")
                       usuario = (nomeCompleto, )
                       user.inserirUsuario(usuario)
                    else:
                        dataAtual = date.today()
                        user.consultarUsuario()
                        idUsuarios = int(input("Digite o ID usuário: "))
                        descricao = input("Escreva a nova tarefa: ")
                        tarefa = (descricao, dataAtual, idUsuarios, )
                        task.inserirTarefas(tarefa)
                    limparTela()
                elif opcao == 2:
                     limparTela()
                     print(f"\033[35m*** Atualizar {listaMenu[tabela-1]}   ***\033[m")
                     if tabela == 1:
                         user.consultarUsuario()
                         idUsuarios = int(input("Digite o ID usuário: "))
                         nomeCompleto = input("Insira o nome completo: ")
                         usuario = (nomeCompleto, idUsuarios, )
                         user.atualizarUsuario(usuario)
                     else:
                        dataAtual = date.today()
                        task.consultarTarefa()
                        idTarefas = int(input("Digite o ID tarefa: "))
                        descricao = input("Escreva a nova tarefa: ")
                        tarefa = (descricao, dataAtual, idTarefas, )
                        task.atualizarTarefa(tarefa)
                     limparTela()
                elif opcao == 3:
                    limparTela()
                    print(f"\033[35m*** Consultar {listaMenu[tabela-1]} ***\033[m")
                    if tabela == 1:
                        user.consultarUsuario()
                    else:
                        task.consultarTarefa()
                    limparTela()
                elif opcao == 4:
                    limparTela()
                    print(f"\033[35m*** Deletar {listaMenu[tabela-1]} ***\033[m")
                    if tabela == 1:
                        user.consultarUsuario()
                        idUsuarios = int(input("Digite o ID usuário: "))
                        usuario = (idUsuarios, )
                        user.deletarUsuario(usuario)
                    else:
                        task.consultarTarefa()
                        idTarefas = int(input("Digite o ID tarefa: "))
                        usuario = (idTarefas, )
                        task.deletarTarefa(usuario)
                    limparTela()
                elif opcao == 5:
                    limparTela()
                    break
    


        
    
    limparTela()
    print("\033[1mPrograma finalizado com sucesso!\n\033[m")
else:
    limparTela()
    print("Algo deu errado!!!\n")

   
