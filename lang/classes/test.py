class Complex:
    def __init__(self, a, b):
        self.real = a
        self.imag = b

    def __add__(num1, num2):
        return Complex(num1.real + num2.real, num1.imag + num2.imag)

    def __str__(self):
        return f"The number is: {self.real}, {self.imag}."

num1 = Complex(1, 2)
num2 = Complex(3, 4)
print(num1+num2)