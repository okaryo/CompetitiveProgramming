fun main() {
    val a = readLine()!!.split(" ").map(String::toInt).toMutableList()
    a.sort()
    if (a[2] - a[1] == a[1] - a[0]) {
        println("Yes")
    } else {
        println("No")
    }
}
