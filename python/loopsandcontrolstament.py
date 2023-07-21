iterator = (1,2,3,4)
for item in iterator:
    print(item)
else:
    example = {'iterator':'dictionary',
               'loop': 'for',
               'operation': 'display dictionary elements'
               }
for key in example:
    print(f"{key}: {example[key]}")
for key, value in example.items():
    print(f"{key}: {value}")