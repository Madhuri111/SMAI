Seaborn is a Python data visualization library based on matplotlib. It provides a high-level interface for drawing attractive and informative statistical graphics. For a brief introduction to the ideas behind the library, you can read the introductory notes.

The norm is what is generally used to evaluate the error of a model. For instance it is used to calculate the error between the output of a neural network and what is expected (the actual label or value). You can think of the norm as the length of a vector. It is a function that maps a vector to a positive value

Covariance indicates the level to which two variables vary together. If we examine N-dimensional samples, X = [x_1, x_2, ... x_N]^T, then the covariance matrix element C_{ij} is the covariance of x_i and x_j. The element C_{ii} is the variance of x_i.
Covariance is the measure of joint probability of two variables

the covariance is defined as the expected value (or mean) of the product of their deviations from their individual expected values:[3][4]:p. 119

X,Y
cov=E[(X-E[X])(Y-E[Y])]=E[XY]-E[X]E[Y]


IF TWO RANDOM VARIABLES ARE INDEPENDENT,THEN THE COVARIANCE IS ZERO

C POSITIVE IF HIGHER THAN AVERAGE VALUES OF ONE VARIABLE TEND TO BE PAIRED WITH HIGHER THAN AVERAGE VALUES OF OTHERS

LINESPACE:--
np.linspace(2.0, 3.0, num=5)
array([2.  , 2.25, 2.5 , 2.75, 3.  ])

np.linspace(2.0, 3.0, num=5, endpoint=False)
array([2. ,  2.2,  2.4,  2.6,  2.8])

np.linspace(2.0, 3.0, num=5, retstep=True)


	The numpy.meshgrid function is used to create a rectangular grid out of two given one-dimensional arrays representing the Cartesian indexing or Matrix indexing.


numpy.ravel(array, order = ‘C’) : returns contiguous flattened array(1D array with all the input-array elements and with the same type as it). A copy is made only if needed.



ZIP FUNCTION:-
number_list = [1, 2, 3]
str_list = ['one', 'two', 'three']
{(2, 'two'), (3, 'three'), (1, 'one')}

A contour line of a function of two variables is a curve along which the function has a constant value, so that the curve joins points of equal value. It is a plane section of the three-dimensional graph of the function f parallel to the-plane

