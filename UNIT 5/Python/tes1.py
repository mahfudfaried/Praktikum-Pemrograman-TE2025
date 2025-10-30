basedict = {'HH': 0, 'MM': 0, 'SS': 0}
jam = {}
jam['J'] = basedict


def ResetJam (HH, MM, SS):

    HH = 0
    MM = 0
    SS = 0


def TulisJam (HH, MM, SS):

    print('Jam :', HH, MM, SS)


def JamToDetik (HH, MM, SS):
   
    return (HH * 3600 + MM * 60 + SS)


def DetikToJam(d):
 
    jam['J'] = basedict

    jam['J']['HH'] = d / 3600
    sisa = d % 3600
    jam['J']['MM'] = sisa / 60
    jam['J']['SS'] = sisa % 60
    return jam['J']


def main():

    jam['J1'] = basedict
    jam['J2'] = basedict
    dt = 30000

    print('Assalamualaikum')
    ResetJam(**jam['J1'])
    jam['J1']['HH'] = 8
    jam['J1']['MM'] = 50
    TulisJam(**jam['J1'])
    print('Konversi jam ke detik:', JamToDetik(**jam['J1']))
    print('==================')
    print('detik =', dt)

    jam['J2'] = DetikToJam(dt)
    TulisJam(**jam['J2'])


if __name__ == "__main__":
    main()