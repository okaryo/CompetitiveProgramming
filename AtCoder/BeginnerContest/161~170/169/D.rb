require 'prime'
n = gets.to_i

ans = 0
n.prime_division.each do |_, e|
  x = 1
  while e >= x do
    e -= x
    x += 1
  end
  ans += x - 1
end

puts ans