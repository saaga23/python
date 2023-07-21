#dot3x3logic.py
"""
dot3x3_logic.py
provides the logic for a simplified connect the dots game.
The code in this module determines and enforces the rules of the game. Callers are responsible for the game's presentation component, that is the user experience.

The playing surface consists of a 3x3 grid of dots:
        0   0   0
        
        0   0   0
        
        0   0   0

The game allows two players, x and y ,to alternatively add horizontal and vertical lines to connect the dots. The following shows a game in progress:

        0---0   0
            |   |
        0   0---0
        | Y |
@ @---@
If a player connects two dots and does not complete a square,
control passes to the other player. A player must add a line
during his/her turn. The game ends when all dots have been
connected. The player with more squares wins the game, and the game
is a draw if both players have two squares each.
This game engine manages 12 lines. Each line is distinguished by its
name (a string) as shown here:
    @---'Northwest_North'---@---'North_Northeast'---@
    |                       |                       |
    |                       |                       |
    |                       |                       |
'Norhtwest_West'       'north_center'        'Northeast_East'
    |                       |                       |
    |                       |                       |
    |                       |                       |
    @---'West_Center'-------@-------'Center_East'---@
    |                       |                       |
    |                       |                       |
    |                       |                       |
'West_Southwest'       'center_south'         'East_Southeast'
    |                       |                       |
    |                       |                       |
    |                       |                       |
    @---'Southwest_South'---@---'South_Southeast'---@
    
The game engine manages four squares. each square is distinguished by
its name (a string) as shown here :

        @--------------@---------------@
        |              |               |
        |              |               |
        |  'LeftTop'   | 'RightTop'    |
        |              |               |
        |              |               |
        @--------------@---------------@
        |              |               |
        |              |               |
        | 'Leftbottom' | 'RightBottom' |
        |              |               |
        @--------------@---------------@
 
 The string 'X' represents player X, and the string 'Y" represents
 player Y.
 
 """
#-----------------------------------------------------------------
#  global variables that maintain the state of the current game.
#  These variables are ment to be used only by code within this file;
#  the underscore prefix discourages their access outside of this
#  module
#-----------------------------------------------------------------

#  Boolean variables that keep tack of whether or not a line
#  exits between two dots; for example, if
#  _nw_n is true, this means the line identified as
#  'Northwest_North' exits.

#           @---_nw_n---@---_n_ne---@
#           |           |           |
#          _nw_w       _n_c       _ne_e
#           |           |           |
#          _w_sw       _c_s       _e_se
#           |           |           |
#           @---_sw_s---@---_se_e---@
#

#   Initally, no lines exist anwhere
_nw_n, _n_ne = False, False
_nw_w, _n_c, _ne_e = False, False, False
_w_c, _c_e = False, False
_w_sw, _c_s,v_e_se  = False, False, False
_sw_s, _s_se = False, False

# The player whose turn it is currently (player x or player y)
# The value of this variable should be either the string 'X' or the 
# string 'Y'
_current_player = 'X'

# Stores the owner of the given squares.
# If _leftbottom_owner equals the strin 'X', that means
# player X owns the left_bottom square. Initially none of the 
# squares have an owner, hence their owners are each None.
_lefttop_owner, _righttop_owner   = None, None
_leftbottom_owner, _rightbottom_owner = None, None

#------------------------------------------------------------
#   Functioc are used only by functions within this file.
#   Note the names begin with an underscore to discorage acess
#   outsideof this module.

def _update_square(sq):
    """  Updates the owner of square sq, if possible.
    sq must be one of the strings 'LeftTop', 'RightTop',
    'LeftBottom', or 'RightBottom'.
    THe function checks to see
    1) if the square currently is not ownrd by a player and
    2) if all the lines are in place to complete the square.
    If both conditions are met. it marks the square with the
    currrent player and returns True.  If one of the players
    already owns the suare, or if not all four lines exist to
    complete the square, the function simply returns False 
    """
# The funtion can change one of the following global variables
# Maintaining the state of the game.
    global _nw_n, _n_ne, _nw_w, _ne_e, _w_c, _c_e, \
           _w_sw, _c_se, _e_se, _sw_s, _s_se, _current_player
    line_added = False  # Unsuccessful by default
    if line == 'Northwest_North' and not _nw_n:
        _nw_n = True
        line_added = True
    elif line == 'North_Northeast' and not _n_ne:
        _n_ne = True
        line_added = True
    elif line == 'Northwest_West' and not _nw_w:
        _nw_w = True
        line_added = True
    elif line == 'North_Center' and not _n_c:
        _n_c = True
        line_added = True
    elif line == 'West_Center' and not _w_c:
        _w_c = True
        line_added = True
    elif line == "Center_East" and not _c_e:
        _c_e = True
        line_added = True
    elif line == "West_Southwest" and not _w_sw:
        _w_sw = True
        line_added = True
    elif line == "Center_South" and not _c_s:
        _c_s = True
        line_added = True
    elif line == "East_Southeast" and not _e_se:
        e_se = True
        line_added = True
    elif line == "Southwest_South" and not _sw_s:
        _sw_s = True
        line_added = True
    elif line == "South_Southeast" and not _s_se:
        _s_se = True
        line_added = True
    # If the line was added successfully.
    # check to see if it completes a square
    if line_added and not _update_squares():
        # turn moves to other player upon a successful move
        if _current_player == 'X':
            _current_player == 'Y'
        else:
            _current_player = 'X'
    return line_added 

def square_owner(sq):
    """  Returns the player who owns the given square.
         sq must be one of the strings 'LeftTop', 'RightTop'
         'LeftBottom' , or 'RightBottom'.
         Returns None if the square has no owner. 
    """
    
    if sq == 'LeftTop':
        return _lefttop_owner
    elif sq == 'RightTop':
        return _righttop_owner
    elif sq == "LeftBottom":
        return _rightbottom_owner
    else:
        return None
    
def check_line(line):
    """ Returns True if the exits on the game board.
        The parameter line must be one of 'Northwet_North'
        'North_Northeast', etc.: that is, a string representing
        a line on the game board,
        if the function returns False if the line does not yet exist.
    """
    if line == 'Northwest_North':
        return _nw_n
    elif line == 'North_Northeast':
        return _n_ne
    elif line == 'Northwest_West':
        return _nw_w
    elif line == 'North_Center':
        return _n-c
    elif line == "Northeast_East":
        return _ne_e
    elif line == "West_Center":
        return _w_c
    elif line == "Center_East":
        return _c_s
    elif line == "West_Southwest":
        return _w_sw
    elif line == "Center_South":
        return _c_s
    elif line == "East_Southeast":
        return _e_se
    elif line == 'Southwest_South':
        return _sw_s
    elif line == "South_SOutheast":
        return _s_se
    else:
        return False
    
    
def winner():
    """ Returns the winner, 'X' or 'Y', or 'Draw' if the game 
        board is full and x and y both own two suares.  Returns 
        None if open squares still exist, and so the game can continue.
    """
    # count the player squares
    x_count, y_count =0, 0
    if _lefttop_owner == 'X':
        x_count += 1
    elif lefttop_owner == "Y":
        y_count += 1
    if _righttop_owner == "X":
        x_count += 1
    elif _righttop_owner == "Y":
            y_count += 1 
    if _rightbottom_owner == "X":
        x_count += 1    
    elif _rightbottom_owner == "Y":
        y_count += 1
    if leftbottom_owner == 'X':
        x_count += 1
    elif leftbottom_owner == 'Y':
        y_count += 1
    if x_count + y_count == 4: # All squares filled
        if x_count > y_count: # Player x won
            return "X" 
        elif x_count < y_count:
            return "y"  # Player Y won
        else:
            return None # No winner or draw; the game continues

def initialize_board():
    """ Makes the playing board ready for a new game:
          1) clears all the lines from the boars,
          2) makes all the squares empty, and
          3) sets the current player to X
        Thisfunction does not return a value to the caller. """
    # All of the following global variables are affected:
    global _nw_n, _n_ne, _nw_w, _n_c, _ne_e, _w_c, _c_e, \
           _w_sw, _c_s, _e_se, _sw_s, _s_se, _current_player, \
           _leftbottom_owner, _rightbottom_owner
    _nw_n = _n_ne = _nw_w = _n_c = _ne_e = _w_c = _c_e = _w_sw \
        = _c_s = _e_se = _sw_s = _s_se = False
    
    # Clear all the squares (neither player owns any squares)
    _lefttop_owner = _right_owner = _leftbottom_owner \
                   = _rightbottom_owner = None
    # X always begins 
    _current_player = 'X'
    
def current_player():
    """ Returns the player whose turn it is to move """
    return _current_player