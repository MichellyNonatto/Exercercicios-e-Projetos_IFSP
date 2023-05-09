import sqlite3
from sqlite3 import Error

def criarBanco(banco):
    
    # Definindo variavel com a conexao com o BD.
    conn = sqlite3.connect(banco)
    # Definindo cursor para manipular dados do BD.
    c = conn.cursor()

    try:
        c.execute("""
            CREATE TABLE IF NOT EXISTS "usuarios" ("idUsuarios" INTEGER NOT NULL, "nomeCompleto" TEXT NOT NULL UNIQUE, PRIMARY KEY("idUsuarios" AUTOINCREMENT));
        """)
        
        c.execute("""
            CREATE TABLE IF NOT EXISTS "tarefas" ("idTarefas" INTEGER NOT NULL, "descricao" TEXT NOT NULL, "dataInclusao" TEXT NOT NULL, "idUsuarios" INTEGER NOT NULL, PRIMARY KEY("idTarefas" AUTOINCREMENT), FOREIGN KEY("idUsuarios") REFERENCES "usuarios"("idUsuarios"));
        """)

        print("\033[32mTabelas criadas com sucesso!\033[m")
        return conn
    
    except Error as e:
        print(e)