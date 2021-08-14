r,b = gets.split.map(&:to_i)
x,y = gets.split.map(&:to_i)
check = lambda do |t|
  red = r - t
  blue = b - t
  if red < 0 || blue < 0
    return false
  end
  num = red / (x-1) + blue / (y-1)
  return num >= t
end

ok = 0
ng = 10**18 + 1
while ng - ok > 1 do
  mid = (ok + ng) / 2
  if check.call(mid)
    ok = mid
  else
    ng = mid
  end
end
puts(ok)
