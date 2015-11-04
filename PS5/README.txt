Hello!

Over the next four weeks, we will be working on implementing a Complex number API. Don't
worry about what this entails. For now, we will be only implementing controller logic, aka
the actual functionality of the API. You can do this in whatever language you wish! If you wish to review on complex numbers, you can find a description of them here: http://tutorial.math.lamar.edu/Classes/Alg/ComplexNumbers.aspx

Below are a list of functionalities we want you to implement:

Constructors (make a new complex object, copy constructor)
Copy (equals) operator
Getters and Setters (Getters and Setters are get and set functions that return or set a new value of the complex number/components of it that you're trying to edit/view. The reason this exists is so that people can't maliciously change the values of your complex object whenever they want. Some types you want to make getters and setters for include complex numbers, real/imaginary components, and magnitude)
binary operations (add, subtract, multiply, divide)
conjugates (conjugate of a + bi = a - bi)
toString
angle
powers and roots (Bonus: abstract the function to work with any arbitrary double as
the power/root, instead of defining a square/square root function)



 As any good API, you want your functionality to be robust. this means, you want
static and non-static functions, error handling, etc. To give you an idea of what I mean by
that, be sure you're code will be able work with these example calls:

complex a = (); // 0 + 0i
complex b = (4); // 4 + 0i
complex c = (3, 6); // 3 + 4i
complex z = "5 - 7i"; //5 - 7i

getImaginary(c); //return 6
b.getReal(); //return 4

a.add(b) // a = 4 + 0i

complex d = subtract(b, c); // 1 - 4i

double e = 4;

c.add(e); //c = 7 + 6i

You can make the API as robust and functional as you want it to be, beyong the bare minimum
of implementing the above functions. 