fun main() {
    val abc = readLine()!!.split(" ").map(String::toInt)
    if (abc[0] == abc[1]) {
        println(abc[2])
    } else if (abc[1] == abc[2]) {
        println(abc[0])
    } else if (abc[0] == abc[2]) {
        println(abc[1])
    } else {
        println(0)
    }
}
