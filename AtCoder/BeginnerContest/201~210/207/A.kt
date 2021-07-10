fun main() {
    val abc = readLine()!!.split(" ").map(String::toInt).toMutableList().sorted()
    println(abc[1] + abc[2])
}
