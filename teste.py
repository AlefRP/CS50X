def reverse_string(s: str) -> str:
    # Return inversed string
    return s[::-1]

def first_unique_char(s: str) -> str:
    for char in s:
        if s.count(char) == 1:
            return char

def common_elements(list1: list, list2: list) -> list:
    return [item for item in list1 if item in list2]

def count_elements(lst: list) -> dict:
    result = {}
    # count how many times an element appears in the list
    for item in lst:
        if item in result:
            result[item] += 1
        else:
            result[item] = 1
    return result

def factorial(n: int) -> int:
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)

class Calculator:
    def add(self, a, b):
        return a + b
    
    def sub(self, a, b):
        return a - b
    
    def mul(self, a, b):
        return a * b
    
    def div(self, a, b):
        return a / b

import requests

url = 'https://api.github.com'

response = requests.get(url)

if response.status_code == 200:
    print(response.json)