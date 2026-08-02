class Saving{
    int balance;
    void deposit(int value){
        balance += value;
        System.out.println(value + "deposited successfully...");
    }
    void withdraw(int value){
        if(balance<value){
            throw new ArithmeticException("Insufficinet balance...");
        }
        else{
            balance -=value;
            System.out.println(value + "amount withdrawn successfully...")
        }
    }
}
class Credit{
    int limit;
    Credit(int limit){
        this.limit = limit;
    }
    void deposit(int value){
        limit += value;
        System.out.println(value + "deposited successfully...");
    }
    void withdraw(int value){
        if(limit<value){
            throw new ArithmeticException("limit is insufficient");
        }
        else{
            limit -=value;
            System.out.println(value + "amount withdrawn successfully...")
        }
    }
}
class bankacc{
    public static void main(string args[]){
    
    }
}