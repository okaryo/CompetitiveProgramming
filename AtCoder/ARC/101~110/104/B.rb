n,s = gets.split
n = n.to_i
ans = 0
n.times do |i|
  at = 0
  gc = 0
  i.upto(n-1) do |j|
    if s[j] == 'A'
      at += 1
    elsif s[j] == 'T'
      at -= 1 
    elsif s[j] == 'G'
      gc += 1
    elsif s[j] == 'C'
      gc -= 1
    end
    ans += 1 if at == 0 && gc == 0
  end
end
puts ans
