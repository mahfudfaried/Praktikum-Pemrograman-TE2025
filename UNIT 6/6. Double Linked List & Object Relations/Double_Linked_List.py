import pickle
class DoublyNode(object):
    def __init__(self, val):
        self.val = val
        self.next = None
        self.prev = None
    
    def traversal(self):
        node = self
        while node != None:
            print(node.val)
            node = node.next
    
    def traverseprev(self):
        node = self
    
    def __del__(self):
        print(self.val, "gerbong meledak")

with open('company_datadn.pk1', 'wb') as output:
    company1 = DoublyNode(12)
    pickle.dump(company1, output, pickle.HIGHEST_PROTOCOL)
    company2 = DoublyNode(99)
    pickle.dump(company2, output, pickle.HIGHEST_PROTOCOL)
    company3 = DoublyNode(37)
    pickle.dump(company3, output, pickle.HIGHEST_PROTOCOL)

company1.next = company2
company2.next = company3
company2.prev = company1
company3.prev = company2
lprev = company3
lprev.traverseprev()

del company1
del company2
del company3

with open('company_datadn.pk1', 'rb') as input:
    company1 = pickle.load(input)
    print(company1.val)
    company2 = pickle.load(input)
    print(company2.val)
    company3 = pickle.load(input)
    print(company3.val)