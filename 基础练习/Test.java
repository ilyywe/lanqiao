package algorithm.Lanqiao.基础练习;

public class Test {

	public static void main(String[] args) {
		int n = 1234567009;
		int i, j;
		String[] c = { "ling ", "yi ", "er ", "san ", "si ", "wu ", "liu ", "qi ", "ba ", "jiu " };
		String[] d = { "", "shi ", "bai ", "qian ", "wan ", "shi ", "bai ", "qian ", "yi ", "shi ", "bai " };
		String ss = n + "";
		String buffer = new String();
		boolean b = true;
		// 第一次出现零
		for (i = 0; i < ss.length(); i++) {
			for (j = 0; j <= 9; j++)
				if (ss.charAt(i) == j + '0')
					break;
			if ((ss.length() + 2) % 4 == 0 && i == 0 && j == 1) {
				buffer += d[ss.length() - i - 1];
			} else if (i != ss.length() - 1 && j == 0) {
				if (b) {
					buffer += c[j];
					b = false;
				}
			} else if (i == ss.length() - 1 && j == 0) {
				if (!b)
					buffer = buffer.substring(0, buffer.length() - 5);// 如果最后一个也为0，则去掉之前添加的
																		// ling
			} else {
				buffer += c[j] + d[ss.length() - i - 1];
				b = true;
			}
		}
		System.out.println(buffer);
	}

}
