import keyboard
import pywhatkit
import time

from datetime import datetime

print("Vamos automatizar suas menssagens!")

telefone = ['+5511973189188']

while len(telefone) >= 1:
    pywhatkit.sendwhatmsg(telefone[0], 'Está mensagem foi enviada automaticamente por meio de uma aplicação Python',datetime.now().hour,datetime.now().minute + 2)
    del telefone[0]
    time.sleep(60)
    keyboard.press_and_release('ctrl + w')