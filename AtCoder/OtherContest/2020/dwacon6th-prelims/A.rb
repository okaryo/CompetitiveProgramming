n = gets.to_i
st = n.times.map{gets.split.map(&:chomp)}
x = gets.chomp

sum = 0
check = false
st.each do |s, t|
  sum += t.to_i if check
  check = true if s == x
end

puts sum
