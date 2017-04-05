class xyz implements Runnable{
	public void run(){
		int i;
		for(i=65;i<65+26;i++){
			System.out.print((char)i);
			try{
				Thread.sleep(1000);
			}
			catch (Exception e){}
		}
	}
}

class comma implements Runnable {
	public void run(){
		int i=0;
		int sleep = 500;
		while(true){
			try {
				Thread.sleep(sleep);
			}
			catch (Exception e){}

			System.out.print(',');
			if (i==0) sleep+=500;
			i=i+1;
		}
	}
}
class brackets implements Runnable {
	public void run(){
		int i=0;
		int sleep = 500;
		while(true){
			System.out.print('(');
			try {
				Thread.sleep(sleep);
			}
			catch (Exception e){}

			System.out.print(')');
			if (i==0) sleep+=500;
			i=i+1;
		}
	}
}

class kapil {
	public static void main(String ar[]) throws Exception{
		xyz k;
		Thread a,b;
		k = new xyz();
		
		// b = new Thread(new comma());
		b = new Thread(new brackets());
		b.start();
		while(true){

			a = new Thread(k);
			a.start();
			Thread.sleep(4999);
		}
		// System.out.print("x");
	}
}