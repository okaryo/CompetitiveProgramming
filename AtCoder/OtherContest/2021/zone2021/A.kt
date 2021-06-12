fun main() {
    val s = readLine()!!
    println(Regex("""ZONe""").findAll(s).count())
}
