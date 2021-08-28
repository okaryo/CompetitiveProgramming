fun main() {
    val n = readLine()!!.toInt()
    val a = readLine()!!.split(" ").map(String::toInt).sorted()
    for (i in 1..n) {
        if (a[i-1] != i) {
            println("No")
            return
        }
    }
    println("Yes")
}
