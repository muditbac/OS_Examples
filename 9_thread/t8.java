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

class kapil{
	public static void main(String ar[]) throws Exception {
		pqr k;
		Thread a,b;
		k = new pqr();
		while (true){
			a = new Thread(k);
			a.start();
			Thread.sleep(4999);
		}
	}
}
