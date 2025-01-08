class Solution {
    public int distMoney(int money, int children) {
        if (money < children) return -1;

        int currMoney = money;

        currMoney = currMoney - children;

        if (currMoney < 7) return 0;

        int luckyKid = currMoney / 7;
        int remainingMoney = currMoney % 7;

        if (luckyKid + 1 == children && remainingMoney == 3) luckyKid--;
        if ((luckyKid == children && remainingMoney > 0) || luckyKid > children) luckyKid = children - 1;

        return luckyKid;
	}
}
