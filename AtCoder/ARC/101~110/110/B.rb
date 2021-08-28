N = gets.to_i
T = gets.chomp

if T == '1'
  puts(2*10**10)
  exit 0
end
if T == '11'
  puts(10**10)
  exit 0
end

unless ('110' * ((N/3)+3)).include?(T)
  puts(0)
  exit 0
end

zero_c = T.count('0')
ans = 10**10 - zero_c
if T[-1] == '0'
  ans += 1
end
puts(ans)
