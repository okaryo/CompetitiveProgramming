n = gets.to_i
c = gets.split.map(&:to_i)
q = gets.to_i
sell = 0
all_per = 0
set_per = 0
min_all_c = 10**9
min_set_c = 10**9
n.times do |i|
  if i % 2 == 0
    min_set_c = [c[i], min_set_c].min
  else
    min_all_c = [c[i], min_all_c].min
  end
end
q.times do
  query = gets.split.map(&:to_i)
  if query[0] == 1
    x = query[1] - 1
    a = query[2]
    x_count = if x % 2 == 0
      c[x] - all_per - set_per
    else
      c[x] - all_per
    end
    if x_count >= a
      c[x] -= a
      sell += a
      if x % 2 == 0
        min_set_c = [c[x], min_set_c].min
      else
        min_all_c = [c[x], min_all_c].min
      end
    end
  elsif query[0] == 2
    a = query[1]
    if min_set_c - set_per - all_per >= a
      set_per += a
    end
  else
    a = query[1]
    if [min_set_c - set_per - all_per, min_all_c - all_per].min >= a
      all_per += a
    end
  end
end
n.times do |i|
  if i % 2 == 0
    sell += set_per
  end
end
sell += all_per * n
puts(sell)

