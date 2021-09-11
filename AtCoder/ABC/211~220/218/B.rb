P = gets.split.map(&:to_i)
ans = ''
P.each do |pi|
  ans << ('a'.ord + pi - 1).chr
end
puts(ans)
