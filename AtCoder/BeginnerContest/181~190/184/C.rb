r1,c1 = gets.split.map(&:to_i)
r2,c2 = gets.split.map(&:to_i)
r = r2 - r1
c = c2 - c1
ans = 3
if r == 0 && c == 0
  ans = 0
elsif r == c || r == -c
  ans = 1
elsif r.abs + c.abs <= 3
  ans = 1
elsif ((r ^ c ^ 1) & 1) != 0
  ans = 2
elsif r.abs + c.abs <= 6
  ans = 2
elsif (r + c).abs <= 3 || (r - c).abs <= 3
  ans = 2
end
puts ans
