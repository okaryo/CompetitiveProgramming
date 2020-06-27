s = gets.chomp
n = s.size

val = {}
factor = 1
current_num = 0
val[0] = 1
n.times do |i|
  add_num = s[n-1-i].to_i
  current_num = (current_num + factor * add_num) % 2019
  factor = (factor * 10) % 2019
  val[current_num] ||= 0
  val[current_num] += 1
end

sum = 0
val.values.each do |v|
  sum += (v * (v - 1) / 2)
end

puts sum
