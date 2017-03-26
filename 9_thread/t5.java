class xyz implements Runnable {
	public void run(){
		int i;
		for(i=0;i<10;i++){
			System.out.print(i);
			try {
				Thread.sleep(1001);
			}
			catch (Exception e){}
		}
	}
}

class kapil{
	public static void main(String ar[]) throws Exception {
		xyz k;
		Thread a,b;
		k = new xyz();

		for(int i=1;i<=8;i++){
			System.out.print("x");
			a = new Thread(k);
			a.start();
			Thread.sleep(2500);
		}
	}
}
