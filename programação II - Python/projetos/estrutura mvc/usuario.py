import sqlite3

class Usuarios:

    def __init__(self, conn):
        self.nomeCompleto = ""
        self.conn = conn
        self.cursor = self.conn.cursor()

    def inserirUsuario(self, usuario):
        self.cursor.execute("INSERT INTO usuarios (nomeCompleto) VALUES (?);", usuario)
        self.conn.commit()
        return print("\033[32mUsuário inserido com sucesso!\033[m")
    
    def atualizarUsuario(self, usuario):
        self.cursor.execute("UPDATE usuarios SET nomeCompleto = ? WHERE idUsuarios = ?;", usuario)
        self.conn.commit()
        return print("\033[32mUsuário atualizado com sucesso!\033[m")
    
    def consultarUsuario(self):
        self.cursor.execute("SELECT * FROM usuarios;")
        resultado = self.cursor.fetchall()
        if resultado:
            print("{:<12} {:<30} ".format("\033[36;1midUsuarios", "NomeCompleto\033[m"))
            for item in range(len(resultado)):
                print("{:<12} {:<30} ".format(resultado[item][0], resultado[item][1]))
        input("\033[37;1mClique ENTER para continuar...\033[m")
        return print("\033[32mConsulta concluída com sucesso!\n\033[m")

    def deletarUsuario(self, usuario):
        self.cursor.execute("DELETE FROM usuarios WHERE idUsuarios = ?;", usuario)
        self.conn.commit()
        r = input("Entre com 'Y' para concluir a operação: ").upper()
        if r == 'Y':
            return print("\033[32mUsuário deletado com sucesso!\033[m")  
        else:
            return print("\033[33mAção cancelada com sucesso!\033[m")