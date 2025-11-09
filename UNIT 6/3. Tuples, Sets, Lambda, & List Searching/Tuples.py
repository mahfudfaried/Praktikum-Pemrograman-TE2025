t = (1, [0, "test"], {"a1": True })
print(t[2]["a1"])
print(t[1][1])
t[1][1] = "akan"
print(t[1][1])
t[1][0] = "siti"
print(t[1])
t = (1, [0, "test"], {"a1": True} , (0, {"test": 5}, 2))
print(t[3][1]["test"])