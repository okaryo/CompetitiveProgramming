n = gets.to_i
s = gets.chomp
ans = 0
[*'0'..'9'].repeated_permutation(3) do |x, y, z|
  a = s.index(x, 0)
  b = s.index(y, a + 1) if a
  c = s.index(z, b + 1) if b

  ans += 1 if a && b && c
end

puts ans