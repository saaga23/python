class Typeconverter:
    def __init__(self, a):
        self.a = a
        
    def input_reciever(a):
        a = int(input("Enter two numbers"))
        return a
    def convert(a):
        b = float(a)
        return b
tp = Typeconverter(50)
tp.input_reciever()
print(tp.convert())