k = gets.to_i

a = (1..9).to_a
(k - 1).times do
  t = a.shift
  a << (10 * t + (t % 10) - 1) if t % 10 != 0
  a << (10 * t + (t % 10))
  a << (10 * t + (t % 10) + 1) if t % 10 != 9
end

puts a.shift
