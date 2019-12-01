class Solution {
    public String defangIPaddr(String address) {
        String[] splitAddr = address.split("\\.");
        StringBuffer defangedAddrBuffer = new StringBuffer();
        int i;
        for (i = 0; i < splitAddr.length - 1; ++i) {
            defangedAddrBuffer.append(splitAddr[i]);
            defangedAddrBuffer.append("[.]");
        }
        defangedAddrBuffer.append(splitAddr[i]);
        return defangedAddrBuffer.toString();
    }
}
