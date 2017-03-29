class pqr implements Runnable {
	public void run(){
		int i;
		// for(i=0;i<10;i++){
		for(i=0;i<26;i++){
			System.out.print((char)('A'+i));
			try {
				Thread.sleep(1000);
			}
			catch (Exception e){}
		}
	}
}
class comma implements Runnable {
	public void run(){
		int i=0;
		int t=500;
		// for(i=0;i<10;i++){
		while(true){
			i++;
			t = t+500*((t%5)/5);
			try {
				Thread.sleep(500*i);
			}
			catch (Exception e){}
			System.out.print(',');
		}
	}
}

class kapil{
	public static void main(String ar[]) throws Exception {
		pqr k;
		Thread a,b;
		k = new pqr();
		b = new Thread(new comma());
		b.start();
		while (true){
			a = new Thread(k);
			a.start();
			Thread.sleep(4999);
		}
	}
}
