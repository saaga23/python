word=("hello world")
print(word.count("l"))

companies = ["polaris", "sterling", "firstbank"]
print((companies[2]))
print((companies[1]))
print(companies)
new_companies= [["polaris",'sky'],["firstbank,gtbank"]]
print(new_companies[0][-1])
new_companies[0].append("newbank")
print(new_companies)
new_companies.extend([["sterlingbank","Ecobank"]])
print(new_companies)
companies.remove("polaris")
print(companies)
new_companies.pop([0][-1])
print(new_companies)
some_numbers=[4,5,8,7]
some_numbers.sort()
print(some_numbers)
print(len(some_numbers))
print(len(new_companies[0]))



Tuple = (2,3,4,"hi")
print(Tuple[-1])
print(type(Tuple[0]))