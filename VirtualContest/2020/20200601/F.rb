require 'prime'
n, p = gets.split.map(&:to_i)

ans = 1
p.prime_division.each do |x, e|
  ans *= x ** (e / n)
end
puts ans