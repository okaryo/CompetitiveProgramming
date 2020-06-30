s = gets.chomp
n = s.size

ans = 0
['', '+'].repreated_permutation(n-1) do |op|
  ans += eval(s.chars.zip(op).join)
end
puts ans
