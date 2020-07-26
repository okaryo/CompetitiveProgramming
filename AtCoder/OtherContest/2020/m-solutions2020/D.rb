n = gets.to_i
a = gets.split.map(&:to_i)
a << 0

have = 1000
now_day = 0
while now_day < n
  if a[now_day] <= a[now_day + 1]
    (now_day+1).upto(n-1) do |i|
      if a[i] > a[i+1]
        kabu = have / a[now_day]
        have -= a[now_day] * kabu
        have += a[i] * kabu

        now_day = i
        break
      end
    end
  end
  now_day += 1
end

puts have
