t = int(input())
vowels = ["A", "E", "I", "O", "U"]
j = 1
while t > 0:
    print("Case #" + str(j) + ":",end=" ")
    count = 0
    a = {}
    b = {}
    S = input()
    V = False
    C = False
    if len(S) == 1 or len(S) == 0:
        print(0)
    else:
        for i in S:
            if i in vowels:
                if i in b:
                    b[i] += 1
                else:
                    b[i] = 1
                    V = True
                count += 1
            else:
                if i in a:
                    a[i] += 1
                else:
                    a[i] = 1
                    C = True
        if C == True:
            consonant = a[str(max(a, key=a.get))]
        else:
            consonant = 0
        if V == True:
            vowel = b[str(max(b, key=b.get))]
        else:
            vowel = 0

        con = len(S) - count
        if con > count:
            res = len(S) - count
            count -= vowel
            count = count * 2
            res += count
            print(res)
        elif con == count:
            if vowel > consonant:
                res = len(S) - count
                count -= vowel
                count = count * 2
                res += count
                print(res)
            else:
                res = len(S) - con
                con -= consonant
                con = con * 2
                res += con
                print(res)

        else:
            res = len(S) - con
            con -= consonant
            con = con * 2
            res += con
            print(res)
    t -= 1
    j += 1
