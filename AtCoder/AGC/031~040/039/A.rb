s = gets.chomp
k = gets.to_i
a = []
count = 1
last = s[0]
s[1, s.size-1].each_char do |c|
  if c == last
    count += 1
  else
    a << count
    count = 1
    last = c
  end
end
a << count

if a.size == 1
  puts((a.first * k) / 2)
else
  if s[0] == s[-1]
    f = a.shift
    l = a.pop
    sum = a.sum { |x| x / 2 }
    ans = sum * k
    ans += ((f+l) / 2) * (k-1)
    ans += (f/2)
    ans += (l/2)
  else
    sum = a.sum { |x| x / 2 }
    ans = sum * k
  end
  puts(ans)
end
