import sqlite3

class Tarefas:

    def __init__(self, conn):
      self.descricao = ""
      self.datainclusao = ""
      self.conn = conn
      self.cursor = self.conn.cursor()

    def inserirTarefas(self, tarefa):
       self.cursor.execute(f"INSERT INTO tarefas (descricao, dataInclusao, idUsuarios) VALUES (?, ?, ?);", tarefa)
       self.conn.commit()
       return print("\033[32mTarefa inserida com sucesso!\033[m")
    
    def atualizarTarefa(self, tarefa):
       self.cursor.execute("UPDATE tarefas SET descricao = ?, dataInclusao = ? WHERE idTarefas = ?;", tarefa)
       self.conn.commit()
       return print("\033[32mTarefa atualizada com sucesso!\033[m")
    
    def consultarTarefa(self):
      self.cursor.execute("SELECT idTarefas, descricao, dataInclusao, tarefas.IdUsuarios, nomeCompleto FROM tarefas inner join usuarios on tarefas.idUsuarios = usuarios.idUsuarios;")
      resultado = self.cursor.fetchall()
      if resultado:
          print("{:<12} {:<40} {:<12} {:<12} {:<30}".format("\033[36;1midTarefas", "Descricao", "dataInclusao", "IdUsuarios", "NomeCompleto\033[m"))
          for item in range(len(resultado)):
            print("{:<12} {:<40} {:<12} {:<12} {:<30}".format(resultado[item][0], resultado[item][1], resultado[item][2], resultado[item][3], resultado[item][4]))
      input("Clique ENTER para continuar...")
      return print("\033[32mConsulta concluída com sucesso!\033[m\n")
    
    def deletarTarefa(self, tarefa):
       self.cursor.execute('DELETE FROM tarefas WHERE idTarefas = ?', tarefa)
       self.conn.commit()
       r = input("Entre com 'Y' para concluir a operação: ").upper()
       if r == 'Y':
        return print("\033[32mUsuário deletado com sucesso!\033[m")  
       else:
        return print("\033[33mAção cancelada com sucesso!\033[m")
