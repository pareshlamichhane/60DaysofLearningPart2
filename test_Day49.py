import pytest
from Day49 import solve

def test_one():
    # Test case 1: Basic test case
    assert solve(2, 3) == 5
    
def test_two():
    # Test case 2: Edge case with zero
    assert solve(0, 0) == 0
    
def test_three():
    # Test case 3: Negative numbers
    assert solve(-1, -1) == -2
    
def test_four():
    # Test case 4: Large numbers
    assert solve(1000000, 2000000) == 3000000
    
def test_five():
    # Test case 5: Mixed positive and negative
    assert solve(-5, 10) == 5