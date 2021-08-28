fun main() {
    val xy = readLine()!!.split(" ").map(String::toInt)
    if (xy[0] == xy[1]) {
        println(xy[0])
    } else {
        println(3 - xy[0] - xy[1])
    }
}
