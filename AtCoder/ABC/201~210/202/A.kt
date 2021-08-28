fun main() {
    val sum = readLine()!!.split(" ").map(String::toInt).sum()
    println(21 - sum)
}
