# TestMtr Version #0.6, Release date 2/6/12
# /root/research/cudd-3.0.0/mtr/.libs/testmtr -p 2 ./mtr/test.groups
N=0x5586dbf4fc30 C=0x5586dbf4fcf0 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=0
N=0x5586dbf4fcf0 C=0x0        Y=0x5586dbf4fd30 E=0x0        P=0x5586dbf4fc30 F=3 L=0 S=0
N=0x5586dbf4fd30 C=0x0        Y=0x5586dbf4fc70 E=0x5586dbf4fcf0 P=0x5586dbf4fc30 F=4 L=0 S=0
N=0x5586dbf4fc70 C=0x0        Y=0x5586dbf4fcb0 E=0x5586dbf4fd30 P=0x5586dbf4fc30 F=1 L=0 S=0
N=0x5586dbf4fcb0 C=0x0        Y=0x0        E=0x5586dbf4fc70 P=0x5586dbf4fc30 F=2 L=0 S=0
#------------------------
N=0x5586dbf4fc30 C=0x0        Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
#  (0,11)

N=0x5586dbf4fc30 C=0x5586dbf4fcf0 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x5586dbf4fcf0 C=0x0        Y=0x5586dbf4fd30 E=0x0        P=0x5586dbf4fc30 F=0 L=0 S=6
N=0x5586dbf4fd30 C=0x0        Y=0x0        E=0x5586dbf4fcf0 P=0x5586dbf4fc30 F=0 L=6 S=6
#  (0(0,5)(6,11)11)

N=0x5586dbf4fc30 C=0x5586dbf4fdb0 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x5586dbf4fdb0 C=0x5586dbf4fcf0 Y=0x0        E=0x0        P=0x5586dbf4fc30 F=4 L=0 S=12
N=0x5586dbf4fcf0 C=0x5586dbf4fc70 Y=0x5586dbf4fd30 E=0x0        P=0x5586dbf4fdb0 F=0 L=0 S=6
N=0x5586dbf4fc70 C=0x0        Y=0x5586dbf4fcb0 E=0x0        P=0x5586dbf4fcf0 F=0 L=0 S=2
N=0x5586dbf4fcb0 C=0x0        Y=0x5586dbf4fd70 E=0x5586dbf4fc70 P=0x5586dbf4fcf0 F=0 L=2 S=2
N=0x5586dbf4fd70 C=0x0        Y=0x0        E=0x5586dbf4fcb0 P=0x5586dbf4fcf0 F=0 L=4 S=2
N=0x5586dbf4fd30 C=0x0        Y=0x0        E=0x5586dbf4fcf0 P=0x5586dbf4fdb0 F=0 L=6 S=6
#  (0(0(0(0,1)(2,3)(4,5)5)(6,11)11|F)11)

#  (0(0(0,1)(2,3)(4,5)5)(6,11)11|F)
N=0x5586dbf4fc30 C=0x5586dbf4fdb0 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x5586dbf4fdb0 C=0x5586dbf4fc70 Y=0x0        E=0x0        P=0x5586dbf4fc30 F=4 L=0 S=12
N=0x5586dbf4fc70 C=0x0        Y=0x5586dbf4fcb0 E=0x0        P=0x5586dbf4fdb0 F=0 L=0 S=2
N=0x5586dbf4fcb0 C=0x0        Y=0x5586dbf4fd70 E=0x5586dbf4fc70 P=0x5586dbf4fdb0 F=0 L=2 S=2
N=0x5586dbf4fd70 C=0x0        Y=0x5586dbf4fd30 E=0x5586dbf4fcb0 P=0x5586dbf4fdb0 F=0 L=4 S=2
N=0x5586dbf4fd30 C=0x0        Y=0x0        E=0x5586dbf4fd70 P=0x5586dbf4fdb0 F=0 L=6 S=6
#  (0(0(0,1)(2,3)(4,5)(6,11)11|F)11)

N=0x5586dbf4fc30 C=0x5586dbf4fdb0 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x5586dbf4fdb0 C=0x5586dbf4fc70 Y=0x0        E=0x0        P=0x5586dbf4fc30 F=4 L=0 S=12
N=0x5586dbf4fc70 C=0x0        Y=0x5586dbf4fcb0 E=0x0        P=0x5586dbf4fdb0 F=0 L=0 S=2
N=0x5586dbf4fcb0 C=0x0        Y=0x5586dbf4fd30 E=0x5586dbf4fc70 P=0x5586dbf4fdb0 F=0 L=2 S=2
N=0x5586dbf4fd30 C=0x0        Y=0x5586dbf4fd70 E=0x5586dbf4fcb0 P=0x5586dbf4fdb0 F=0 L=4 S=6
N=0x5586dbf4fd70 C=0x0        Y=0x0        E=0x5586dbf4fd30 P=0x5586dbf4fdb0 F=0 L=10 S=2
#  (0(0(0,1)(2,3)(4,9)(10,11)11|F)11)
#------------------------
N=0x5586dbf4fc30 C=0x0        Y=0x0        E=0x0        P=0x0        F=0 L=0 S=4
#  (0,3)

N=0x5586dbf4fc30 C=0x5586dbf4fdb0 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=4
N=0x5586dbf4fdb0 C=0x0        Y=0x5586dbf4fc70 E=0x0        P=0x5586dbf4fc30 F=4 L=0 S=2
N=0x5586dbf4fc70 C=0x0        Y=0x0        E=0x5586dbf4fdb0 P=0x5586dbf4fc30 F=4 L=2 S=2
#  (0(0,1|F)(2,3|F)3)

#------------------------
N=0x5586dbf4fc30 C=0x5586dbf4fc70 Y=0x0        E=0x0        P=0x0        F=0 L=0 S=12
N=0x5586dbf4fc70 C=0x5586dbf4fcf0 Y=0x5586dbf4fcb0 E=0x0        P=0x5586dbf4fc30 F=0 L=0 S=6
N=0x5586dbf4fcf0 C=0x0        Y=0x5586dbf4fd30 E=0x0        P=0x5586dbf4fc70 F=0 L=0 S=2
N=0x5586dbf4fd30 C=0x0        Y=0x5586dbf4fd70 E=0x5586dbf4fcf0 P=0x5586dbf4fc70 F=0 L=2 S=2
N=0x5586dbf4fd70 C=0x0        Y=0x0        E=0x5586dbf4fd30 P=0x5586dbf4fc70 F=0 L=4 S=2
N=0x5586dbf4fcb0 C=0x0        Y=0x0        E=0x5586dbf4fc70 P=0x5586dbf4fc30 F=4 L=6 S=6
#  (0(0(0,1)(2,3)(4,5)5)(6,11|F)11)

