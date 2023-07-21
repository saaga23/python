#circle.py
class circle:
    """ represents a geometric circle object """
    def __init__(self, center, radius):
        """ Initailize the center's center and radius """
        # Disallow a negative radius
        if radius < 0:
            raise ValueError('Negative radius')
        self.center = center
        self.radius = raadius
        
    def get_radius(self):
        """ Return the radius of the circle """
        return self.radius
    
    def get_center(self):
        """ Return the coordinates of the center """
        return self.center
    
    def get_area(self):
        """ Compute and return the area of the circle """
        from math import pi
        return pi* self.radius * sel.radius
    def get_circumference(self):
        """ Compute and return the circumfrance of the circle """
        from math import pi
        return 2 *pi * self.radius
    
    def move(self, pt):
        """ Moves the enter of the circle to point pt """
        self.center = pt
        
    def grow(self):
        """ Increases the radius of the circle """
        self.radius += 1
        
    def shrink(self):
        """ Dewcreses the radius of the circle;
        does not affecr a circle with radius zero """
        if self.radius > 0:
            self.radius -= 1
    
    