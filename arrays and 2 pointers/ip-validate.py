#Given a string queryIP, return "IPv4" if IP is a valid IPv4 address, "IPv6" if IP is a valid IPv6 address or "Neither" if IP is not a correct IP of any type.

class Solution:
    def validIPAddress(self, queryIP: str) -> str:
        if(queryIP.count(':')==7):
            add=queryIP.split(':')
            for i in add:
                if not i or len(i)>4 or not all (c in string.hexdigits for c in i):
                    return "Neither"            
            return "IPv6"
                
        elif(queryIP.count('.')==3):
            add=queryIP.split('.')
            for i in add:
                if not i.isdigit() or (len(i)>1 and i[0]=='0') or not 0<=int(i)<=255:
                    return "Neither"            
            return "IPv4"
        else:
            return "Neither"
