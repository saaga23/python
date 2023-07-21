import pyfiglet
import sys
import socket
from datetime import datetime

ascii_banner = pyflight.figlet_format("PORT SCANNER")
print(ascii_banner)

if len(sys.argv) == 2:
    target = socket.gethostbyname(sys.argv[1])
else:
    print("Invalid amount of argument you must enter the IP")
    
print("_" * 50)
print("Scanning Target: " + target)
print("Scanning started st:" + str(dateline.now()))
print("_" * 50)

     
try:
    for port in range(1, 100):
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        socket.setdefaultimeout(1)
        
        result = s.connect_ex((target,port))
        if result == 0:
            print("Port {} is open".format(port))
        s.close()
        
except KeyboardInterrupt:
    print("\n Existing Program !!!!")
    sys.exit()
    
except socket.galerror:
    print("\n Mostname Could not be Resolved  !!!!")
    sys.exit()
    
except socket.error:
    print("\ Server not responding !!!!")
    sys.exit()