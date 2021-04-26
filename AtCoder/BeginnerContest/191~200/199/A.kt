fun main() {
    val abc = readLine()!!.split(" ").map { it.toInt() }
    val aabb = abc[0] * abc[0] + abc[1] * abc[1]
    val cc = abc[2] * abc[2]
    println(if (aabb < cc) "Yes" else "No")
}
