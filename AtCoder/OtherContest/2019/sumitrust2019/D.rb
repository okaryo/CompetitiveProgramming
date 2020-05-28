n = gets.to_i
s = gets.chomp

ans = 0

[*'0'..'9'].repeated_permutation(3) do |i, j, k|
  x = s.index(i, 0)
  y = s.index(j, x + 1) if x
  z = s.index(k, y + 1) if y

  ans += 1 if x && y && z
end

puts ans
